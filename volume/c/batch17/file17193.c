// fichero 17193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17193;

Registro17193 crear_registro17193(int id) {
    Registro17193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
