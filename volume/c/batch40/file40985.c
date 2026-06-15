// fichero 40985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40985;

Registro40985 crear_registro40985(int id) {
    Registro40985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
