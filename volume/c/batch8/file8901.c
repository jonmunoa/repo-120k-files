// fichero 8901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8901;

Registro8901 crear_registro8901(int id) {
    Registro8901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
