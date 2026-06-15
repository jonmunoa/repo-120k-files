// fichero 9237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9237;

Registro9237 crear_registro9237(int id) {
    Registro9237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
