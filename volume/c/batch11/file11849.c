// fichero 11849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11849;

Registro11849 crear_registro11849(int id) {
    Registro11849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
