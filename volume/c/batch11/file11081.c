// fichero 11081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11081;

Registro11081 crear_registro11081(int id) {
    Registro11081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
