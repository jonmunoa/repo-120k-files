// fichero 23901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23901;

Registro23901 crear_registro23901(int id) {
    Registro23901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
