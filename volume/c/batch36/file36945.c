// fichero 36945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36945;

Registro36945 crear_registro36945(int id) {
    Registro36945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
