// fichero 853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro853;

Registro853 crear_registro853(int id) {
    Registro853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
