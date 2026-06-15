// fichero 11249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11249;

Registro11249 crear_registro11249(int id) {
    Registro11249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
