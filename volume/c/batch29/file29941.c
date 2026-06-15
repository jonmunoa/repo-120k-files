// fichero 29941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29941;

Registro29941 crear_registro29941(int id) {
    Registro29941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
