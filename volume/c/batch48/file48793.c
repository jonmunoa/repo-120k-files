// fichero 48793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48793;

Registro48793 crear_registro48793(int id) {
    Registro48793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
