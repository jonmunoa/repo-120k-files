// fichero 21657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21657;

Registro21657 crear_registro21657(int id) {
    Registro21657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
