// fichero 1793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1793;

Registro1793 crear_registro1793(int id) {
    Registro1793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
