// fichero 40881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40881;

Registro40881 crear_registro40881(int id) {
    Registro40881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
