// fichero 47565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47565;

Registro47565 crear_registro47565(int id) {
    Registro47565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
