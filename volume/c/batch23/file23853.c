// fichero 23853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23853;

Registro23853 crear_registro23853(int id) {
    Registro23853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
