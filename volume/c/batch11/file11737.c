// fichero 11737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11737;

Registro11737 crear_registro11737(int id) {
    Registro11737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
