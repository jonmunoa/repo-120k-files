// fichero 11621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11621;

Registro11621 crear_registro11621(int id) {
    Registro11621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
