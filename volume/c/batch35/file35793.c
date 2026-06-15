// fichero 35793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35793;

Registro35793 crear_registro35793(int id) {
    Registro35793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
