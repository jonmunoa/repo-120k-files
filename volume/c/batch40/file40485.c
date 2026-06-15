// fichero 40485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40485;

Registro40485 crear_registro40485(int id) {
    Registro40485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
