// fichero 16913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16913;

Registro16913 crear_registro16913(int id) {
    Registro16913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
