// fichero 4685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4685;

Registro4685 crear_registro4685(int id) {
    Registro4685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
