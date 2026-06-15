// fichero 37821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37821;

Registro37821 crear_registro37821(int id) {
    Registro37821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
