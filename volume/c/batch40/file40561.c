// fichero 40561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40561;

Registro40561 crear_registro40561(int id) {
    Registro40561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
