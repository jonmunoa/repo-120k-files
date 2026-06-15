// fichero 9817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9817;

Registro9817 crear_registro9817(int id) {
    Registro9817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
