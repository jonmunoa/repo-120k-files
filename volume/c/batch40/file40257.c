// fichero 40257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40257;

Registro40257 crear_registro40257(int id) {
    Registro40257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
