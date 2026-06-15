// fichero 3901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3901;

Registro3901 crear_registro3901(int id) {
    Registro3901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
