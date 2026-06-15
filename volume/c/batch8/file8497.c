// fichero 8497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8497;

Registro8497 crear_registro8497(int id) {
    Registro8497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
