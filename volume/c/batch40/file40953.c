// fichero 40953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40953;

Registro40953 crear_registro40953(int id) {
    Registro40953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
