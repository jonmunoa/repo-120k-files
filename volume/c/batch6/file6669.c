// fichero 6669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6669;

Registro6669 crear_registro6669(int id) {
    Registro6669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
