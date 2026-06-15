// fichero 24901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24901;

Registro24901 crear_registro24901(int id) {
    Registro24901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
