// fichero 21893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21893;

Registro21893 crear_registro21893(int id) {
    Registro21893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
