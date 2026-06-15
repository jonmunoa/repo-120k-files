// fichero 24793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24793;

Registro24793 crear_registro24793(int id) {
    Registro24793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
