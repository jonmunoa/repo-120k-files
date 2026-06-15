// fichero 11697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11697;

Registro11697 crear_registro11697(int id) {
    Registro11697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
