// fichero 18065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18065;

Registro18065 crear_registro18065(int id) {
    Registro18065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
