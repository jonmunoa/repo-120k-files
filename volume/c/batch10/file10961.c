// fichero 10961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10961;

Registro10961 crear_registro10961(int id) {
    Registro10961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
