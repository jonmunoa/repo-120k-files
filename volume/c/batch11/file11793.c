// fichero 11793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11793;

Registro11793 crear_registro11793(int id) {
    Registro11793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
