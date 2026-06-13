// fichero 2773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2773;

Registro2773 crear_registro2773(int id) {
    Registro2773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2773(Registro2773 r) {
    return r.valor + r.id;
}
