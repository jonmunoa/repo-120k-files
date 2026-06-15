// fichero 18953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18953;

Registro18953 crear_registro18953(int id) {
    Registro18953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
