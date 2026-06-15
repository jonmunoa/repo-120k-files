// fichero 24669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24669;

Registro24669 crear_registro24669(int id) {
    Registro24669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
