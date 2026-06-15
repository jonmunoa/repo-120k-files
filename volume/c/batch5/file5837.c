// fichero 5837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5837;

Registro5837 crear_registro5837(int id) {
    Registro5837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
