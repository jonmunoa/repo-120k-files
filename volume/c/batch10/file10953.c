// fichero 10953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10953;

Registro10953 crear_registro10953(int id) {
    Registro10953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
