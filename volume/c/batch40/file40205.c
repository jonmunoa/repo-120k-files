// fichero 40205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40205;

Registro40205 crear_registro40205(int id) {
    Registro40205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
