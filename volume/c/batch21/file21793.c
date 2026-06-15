// fichero 21793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21793;

Registro21793 crear_registro21793(int id) {
    Registro21793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
