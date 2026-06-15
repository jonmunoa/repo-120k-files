// fichero 19685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19685;

Registro19685 crear_registro19685(int id) {
    Registro19685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
