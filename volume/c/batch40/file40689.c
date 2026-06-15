// fichero 40689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40689;

Registro40689 crear_registro40689(int id) {
    Registro40689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
