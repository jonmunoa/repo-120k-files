// fichero 44829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44829;

Registro44829 crear_registro44829(int id) {
    Registro44829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
