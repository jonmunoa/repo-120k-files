// fichero 14901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14901;

Registro14901 crear_registro14901(int id) {
    Registro14901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
