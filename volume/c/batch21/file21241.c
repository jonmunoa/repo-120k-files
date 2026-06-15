// fichero 21241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21241;

Registro21241 crear_registro21241(int id) {
    Registro21241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
