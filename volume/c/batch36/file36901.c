// fichero 36901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36901;

Registro36901 crear_registro36901(int id) {
    Registro36901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
