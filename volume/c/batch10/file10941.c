// fichero 10941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10941;

Registro10941 crear_registro10941(int id) {
    Registro10941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
