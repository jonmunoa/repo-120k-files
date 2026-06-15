// fichero 29793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29793;

Registro29793 crear_registro29793(int id) {
    Registro29793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
