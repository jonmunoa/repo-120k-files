// fichero 19993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19993;

Registro19993 crear_registro19993(int id) {
    Registro19993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
