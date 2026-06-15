// fichero 49901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49901;

Registro49901 crear_registro49901(int id) {
    Registro49901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
