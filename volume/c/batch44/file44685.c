// fichero 44685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44685;

Registro44685 crear_registro44685(int id) {
    Registro44685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
