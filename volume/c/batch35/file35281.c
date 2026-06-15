// fichero 35281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35281;

Registro35281 crear_registro35281(int id) {
    Registro35281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
